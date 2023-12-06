//How it works I don't know but it works XD

int gcd(int a, int b) {
    // Handle the case where either a or b is zero
    if (!a || !b)
        return a | b;
    
    // Find the common factor of 2 in a and b
    unsigned shift = __builtin_ctz(a | b);
    
    // Right-shift a by the common factor of 2
    a >>= __builtin_ctz(a);
    
    // Main loop of the binary GCD algorithm
    do {
        // Right-shift b by the common factor of 2
        b >>= __builtin_ctz(b);
        
        // Swap a and b if a is greater than b
        if (a > b)
            swap(a, b); // Assuming swap function is defined elsewhere
        
        // Subtract a from b
        b -= a;
        
    } while (b);
    
    // Return the GCD multiplied by the common factor of 2
    return a << shift;
}
