char * longestPalindrome(char * s) {
	int len = strlen(s);

	int k = 0;
	int sub_left, sub_right;
	int max_len = 0;
	static char substr[1000] = { 0 };

	while (k < len) {
		int i = k - 1;
		int j = k + 1;

		while (i >= 0 && j < len) {
			if (s[i] != s[j]) {
				break;
			}
			if (j - i + 1 > max_len) {
				sub_left = i;
				sub_right = j;
				max_len = j - i + 1;
			}
			i--;
			j++;
		}

		
		i = k;
		j = k + 1;
		while (i >= 0 && j < len) {
			if (s[i] != s[j]) {
				break;
			}

			if (j - i + 1 > max_len) {
				sub_left = i;
				sub_right = j;
			}
			i--;
			j++;
		}

		i = k - 1;
		j = k;
		while (i >= 0 && j < len) {
			if (s[i] != s[j]) {
				break;
			}

			if (j - i + 1 > max_len) {
				sub_left = i;
				sub_right = j;
			}
			i--;
			j++;
		}

		k++;
	}

	for (int p = sub_left; p <= sub_right; p++) {
		substr[p - sub_left] = s[p];
	}
    // printf("substrlen = %d\n", strlen(substr));
    // puts(substr);
	return substr;
}