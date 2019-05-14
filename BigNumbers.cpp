#include <stdio.h>
#include "BigNumbers.h"
#include <vector>
#include <stdexcept>

using namespace std;

namespace BigNumbers{
    
    double MyBigNumbers::Add(std::vector<int> a, std::vector<int> b){
        
        std::vector<int> sum;
        int carry =0;
        for(double i = a.size() ;i<=0; --i){
            int temp = 0;
            a[i] = a[i] + carry;
            carry = 0;
            temp = a[i] + b[i];
            if (temp>9){
                carry = 1;
                temp = temp-10;
                sum[i] = temp;
            } else {
                sum[i] = temp;
            }
            
        }
        
        for(int i = 0; i <= sum.size(); ++i)
            printf("%d",sum[i]);
        return 0;
        
    }
    
    
    
    
    
    double MyBigNumbers::Subtract(std::vector<int> a, std::vector<int> b){
            
        // Take an empty string for storing result
        std::vector<int> result;
        result[0] = 0;
            
        // Calculate length
        double n1 = a.size(), n2 = b.size();
            
        // Reverse
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
            
        int carry = 0;
            
        // Run loop for lenght of the smaller vector
        for (int i=0; i<n2; i++){
                
            int sub = ((a[i]-'0')-(b[i]-'0')-carry);
                
            // If subtraction is less than 0 we add then we add 10 into sub and set carry as 1 for calc in next step
            if (sub < 0){
                sub = sub + 10;
                carry = 1;
            } else
                carry = 0;
                
            result.push_back(sub + '0');
        }
            
        // subtract remaining numbers from larger
        for (int i=n2; i<n1; i++){
            int sub = ((a[i]-'0') - carry);
                
            //
            if (sub < 0){
                sub = sub + 10;
                carry = 1;
            } else
                carry = 0;
                
            result.push_back(sub + '0');
        }
        
        // reverse the result
        reverse(result.begin(), result.end());
        
        for(int i=0; i <= result.size(); ++i)
            printf("%d",result[i]);
    
    return 0;
    }
    
    
double BigNumbers::MyBigNumbers::Multiply(std::vector<int> a, std::vector<int> b){
    
        //return a * b;
        return 0;
    }
    
double BigNumbers::MyBigNumbers::Divide(std::vector<int> a, std::vector<int> b){
    
        //return a / b;
        return 0;
    }
    
double BigNumbers::MyBigNumbers::Mod(std::vector<int> a, std::vector<int> b){
    
        //return (int)a % (int)b;
        return 0;
    }
}
