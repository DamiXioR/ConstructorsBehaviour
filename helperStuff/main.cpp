#include <iostream>
#include <type_traits>

template <typename T>
struct has_deleted_default_ctor {
    template <typename U, typename = decltype(U())>
    static std::false_type test(int);

    template <typename>
    static std::true_type test(...);

    static constexpr bool value = decltype(test<T>(0))::value;
};

template <typename T>
struct has_deleted_copy_ctor {
    template <typename U>
    static auto test(int) -> decltype(U(std::declval<const U&>()), std::false_type());

    template <typename>
    static std::true_type test(...);

    static constexpr bool value = decltype(test<T>(0))::value;
};

template <typename T>
struct has_deleted_move_ctor {
    template <typename U>
    static auto test(int) -> decltype(U(std::declval<U&&>()), std::false_type());

    template <typename>
    static std::true_type test(...);

    static constexpr bool value = decltype(test<T>(0))::value;
};

template <typename T>
struct has_deleted_copy_assign {
    template <typename U>
    static auto test(int) -> decltype(std::declval<U&>() = std::declval<const U&>(), std::false_type());

    template <typename>
    static std::true_type test(...);

    static constexpr bool value = decltype(test<T>(0))::value;
};

template <typename T>
struct has_deleted_move_assign {
    template <typename U>
    static auto test(int) -> decltype(std::declval<U&>() = std::declval<U&&>(), std::false_type());

    template <typename>
    static std::true_type test(...);

    static constexpr bool value = decltype(test<T>(0))::value;
};

template <typename T>
struct has_deleted_dtor {
    template <typename U>
    static auto test(int) -> decltype(std::declval<U&>().~U(), std::false_type());

    template <typename>
    static std::true_type test(...);

    static constexpr bool value = decltype(test<T>(0))::value;
};

template <typename T>
void checkConstructorsAndOperators() {
    std::cout << "Type: " << typeid(T).name() << std::endl << std::endl;
    
    std::cout << "Default Constructor: " << std::boolalpha << std::is_default_constructible_v<T> << std::endl;
    std::cout << "Has deleted default ctor: " << has_deleted_default_ctor<T>::value << std::endl << std::endl;

    std::cout << "Copy Constructor: " << std::boolalpha << std::is_copy_constructible_v<T> << std::endl;
    std::cout << "Has deleted copy ctor: " << has_deleted_copy_ctor<T>::value << std::endl << std::endl;

    std::cout << "Move Constructor: " << std::boolalpha << std::is_move_constructible_v<T> << std::endl;
    std::cout << "Has deleted move ctor: " << has_deleted_move_ctor<T>::value << std::endl << std::endl;

    std::cout << "Copy Assignment Operator: " << std::boolalpha << std::is_copy_assignable_v<T> << std::endl;
    std::cout << "Has deleted copy assign: " << has_deleted_copy_assign<T>::value << std::endl << std::endl;

    std::cout << "Move Assignment Operator: " << std::boolalpha << std::is_move_assignable_v<T> << std::endl;
    std::cout << "Has deleted move assign: " << has_deleted_move_assign<T>::value << std::endl << std::endl;

    std::cout << "Destructor: " << std::boolalpha << std::is_destructible_v<T> << std::endl;
    std::cout << "Has deleted dtor: " << has_deleted_dtor<T>::value << std::endl;

    std::cout << std::endl;
}

int main() {
    // flag c++20
    // add [z=1] to check how lambda is losing default ctro and default copy and move assignment operator 
    auto l = [](){};
    checkConstructorsAndOperators<decltype(l)>();
    
    return 0;
}
