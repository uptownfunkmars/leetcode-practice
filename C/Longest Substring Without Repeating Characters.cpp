int lengthOfLongestSubstring(char * s) {
	int len = strlen(s);
	int max = 0;
	int tag[100] = { 0 };  //store last occurrencr index value plus one of each evry character;
	int i = 0, j = 1;

	tag[s[0] - ' '] = i + 1;

	if (len == 1) {
		return 1;
	}

	while (i < len && j < len) {
		if (tag[s[j] - ' '] != 0 && tag[s[j] - ' '] > i) {
			int dis = j - i;
			if (dis > max) max = dis;
			i = tag[s[j] - ' '];
			tag[s[j] - ' '] = j + 1;
			j++;
		}
		else {
			tag[s[j] - ' '] = j + 1;
			if (j + 1 == len) {
				int dis = len - i;
				if (dis > max) {
					max = dis;
				}
			}
			j++;
		}
		
	}

	return max;
}