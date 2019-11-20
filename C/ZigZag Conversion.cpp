
char *conv_ = NULL;
char * convert(char * s, int numRows) {
    char conv[10100] = {0};
	int delta = 0;
	int len = strlen(s);
    
	if (numRows == 1) delta = 1;
	else delta = 2 * (numRows - 1);
	printf("delta = %d\n", delta);

	int pos = 0;
	int row = 0;
	int theta = delta;
	while (row < numRows) {
		int cur = row;
		while ((row == 0 || row == numRows - 1) && cur < len) {
			conv[pos++] = s[cur];
			cur += delta;
		}

		int count = 0;
		while (row > 0 && row < numRows - 1 && cur < len) {
			conv[pos++] = s[cur];
			if (count % 2 == 0) {
				cur += theta;
			}
			else {
				cur += (delta - theta);
			}
			count++;
		}

		row++;
		theta -= 2;
	}
    conv_ = conv;
    return conv_;
}

