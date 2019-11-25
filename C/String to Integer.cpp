

int myAtoi(char * str) {
	int cursor = 0;
	bool tag = true;
	bool first = false;
	int value = 0;
	int len = strlen(str);

	while (cursor < len) {
		if (!first && str[cursor] == ' ') {
			cursor++;
			continue;
		}
		else {
			if (!first) {
				first = true;
				if (str[cursor] == '-' || str[cursor] == '+') {
					if(str[cursor] == '-') tag = false;
                    cursor++;
					continue;
				}
				else {
					if (str[cursor] < '0' || str[cursor] > '9') break;
				}
			}
		}

		if (str[cursor] >= '0' && str[cursor] <= '9') {
            int remainder = 0;
            
            if(tag){
                remainder = str[cursor++] - '0';
                
            }
            else{
                remainder = -(str[cursor++] - '0');
            }
            
            if (value > INT_MAX/10 || (value == INT_MAX / 10 && remainder > 7)) return INT_MAX;
            if (value < INT_MIN/10 || (value == INT_MIN / 10 && remainder < -8)) return INT_MIN;
            
			value = value * 10 + remainder;
		}
		else break;
	}
    
    
	return value;
	

}

