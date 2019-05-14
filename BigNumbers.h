#ifndef BigNumbers_h
#define BigNumbers_h
#include <vector>

namespace BigNumbers
{
    class MyBigNumbers
    {
        public:
        // Returns a + b
        static double Add(std::vector<int> a, std::vector<int> b);
        
        // Returns a - b
        static double Subtract(std::vector<int> a, std::vector<int> b);
        
        // Returns a * b
        static double Multiply(std::vector<int> a, std::vector<int> b);
        
        // Returns a / b
        static double Divide(std::vector<int> a, std::vector<int> b);
        
        //Returns a % b
        static double Mod(std::vector<int> a, std::vector<int> b);
    
    };
}

#endif /* BigNumbers_h */
