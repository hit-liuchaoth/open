#include "Match.h"

main()
{
	INDIV ind[MAX_NUM];
	int k;




	init(ind,MAX_NUM);


	
	k=insert(ind,"Dick",170,75,NO_NEED,0,0);
	insert(ind,"Jim",170,75,NEED,180,80);
	insert(ind,"Tom",180,80,NEED,170,75);
	insert(ind,"Luck",170,75,NEED,180,80);
	insert(ind,"Noc",180,80,NEED,170,75);
	insert(ind,"Zulu",180,80,NEED,170,75);
	to_find(ind);
	display(ind);
	
}