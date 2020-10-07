#include<iostream>
#include<vector>

//function to set element value in value list
void set_value(int size,std::vector<int> &indexlist) {
	for (int i = 0; i < size; i++) {
		printf("Enter Element Number :%d \n", i + 1);
		int num1 = 0;
		scanf_s("%d", &num1);
		indexlist[i] = num1;

	}
}
//function to get the data stored in index list
void get_value(int size,std::vector<int> &address) {
	for (int i = 0; i < size; i++) {
		printf(" Element at location %d is %d \n", i + 1,address[i]);
		
	}

}

int main() {

	int size1;
	printf("Enter Size of Linked List \n");
	scanf_s("%d",&size1);
	std::vector<int> valuelist(size1);
	std::vector<int> keylist(size1);
	printf("Enter data in key list \n");
	//set value in index list
	set_value(keylist.size(),keylist);
	printf("Enter data in value list \n");
	//set value in value list
	set_value(valuelist.size(),valuelist);
	//get value in index list
	printf("Printing data in key list \n");
	get_value(keylist.size(),keylist);
	//get value in value list
	printf("Printing data in value list \n");
	get_value(valuelist.size(),valuelist);

	//std::cout << ginger.size();
	return 0;
}