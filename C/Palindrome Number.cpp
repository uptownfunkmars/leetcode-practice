bool isPalindrome(int x){
    int reverse = 0;
    int value = x;
    int tag = true;
    
    if(value < 0) tag = false;
    
    while(x != 0){
        int remainder = x % 10;
        x /= 10;
        
        if (reverse > INT_MAX/10 || (reverse == INT_MAX / 10 && remainder > 7)) return false;
        if (reverse < INT_MIN/10 || (reverse == INT_MIN / 10 && remainder < -8)) return false;
        
        reverse = reverse * 10 + remainder;
    }
    
    if(reverse == value && tag) return true;
    else return false;
}
