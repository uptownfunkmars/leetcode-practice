int lengthOfLongestSubstring_1(char * s) {
	int len = strlen(s);
	int max = 0;

	//printf("len = %d \n", len);

	int cur = 0;
	
	while (cur < len) {
		int count = 0;
		int tag[100] = { 0 };
		int cur_in = cur;

		while (cur_in < len) {
			//printf("%d\n", s[cur_in] - 'a');
			//printf("s[cur_in]_ID = %d ", get_index(s[cur_in]));

			if (tag[s[cur_in] - ' '] == 0) {
				tag[s[cur_in] - ' ']++;

				//printf("tag = %d ", tag[get_index(s[cur_in])]);

				count++;
			}
			else break;
			cur_in++;
		}
		
		//printf("count = %d \n", count);

		if (count > max) max = count;

		cur++;
	}

	return max;
}