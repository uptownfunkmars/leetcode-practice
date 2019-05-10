#include <cstdio>
#include <algorithm>

int nums[50];
int numsSize;
int target;

using namespace std;

bool cmp(int a, int b){
	return a < b;
}

int main(){
	scanf("%d %d", &numsSize, &target);
	
	for(int i = 0; i < numsSize; i++){
		scanf("%d", &nums[i]);
	}
	
	sort(nums, nums + numsSize, cmp);
	
	int i = 0, j = numsSize - 1;
	while(i < j){
		if(nums[i] + nums[j] == target){
			printf("[%d, %d]", i, j);
			break;
		}
		else{
			if(nums[i] + nums[j] < target){
                i++;
            }
            else j--;
		}
	}
	
	return 0;
}
 
