#include <stdio.h>
struct block{
	int id;
	int size;
	int start;
	struct block *next;
};
main(){
	printf("1.addblockSortedByStartAddress\n2.AllocateMemory\n3.merge\n4.delete\n5.exit");
	int choice;
	scanf("%d",&choice);
	while(1){
		case 1:addblockSortedByStartAddress();
		break;
		case 2:AllocateMemory();
		break;
		case 3:merge();
		break;
		case 4:delete();
		break;
		case 5:exit(0);
		break;
	}
}

