#include <iostream>

bool calculate(double a, double b, char op, double& result) {
    switch (op) {
        case '+': result = a + b; return true;
        case '-': result = a - b; return true;
        case '*': result = a * b; return true;
        case '/':
            if (b == 0.0) return false;
            result = a / b;
            return true;
        default:
            return false;
    }
}

int main() {
    double a, b, result;
    char op;
    std::cin >> a >> op >> b;
    if (!calculate(a, b, op, result)) return 1;
    std::cout << result << "\n";
    return 0;
}