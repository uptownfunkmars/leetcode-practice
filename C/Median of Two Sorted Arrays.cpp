double findMedianSortedArrays_BruteForce(int* nums1, int nums1Size, int* nums2, int nums2Size) {

	int nums1_nums2[100] = { 0 };

	int i = 0;
	int j = 0;
	int cur = 0;

	while (i < nums1Size && j < nums2Size) {
		if (nums1[i] < nums2[j]) {
			nums1_nums2[cur++] = nums1[i++];
		}
		else {
			nums1_nums2[cur++] = nums2[j++];
		}
	}

	while (i < nums1Size) {
		nums1_nums2[cur++] = nums1[i++];
	}

	while (j < nums2Size) {
		nums1_nums2[cur++] = nums2[j++];
	}

	int sum = nums1Size + nums2Size;
	if (sum % 2 == 0) {
		return nums1_nums2[sum / 2] * 0.5 + nums1_nums2[sum / 2 - 1] * 0.5;
	}
	else {
		return nums1_nums2[sum / 2];
	}

}