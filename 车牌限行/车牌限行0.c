#include<stdio.h>
int main()
{
	int date=0;
	int haze_i=0;
	int car_id=0;
	scanf("%d %d %d",&date,&haze_i,&car_id);
	int end_id=car_id%10;
	//yesÎªÏŞĞĞ
	if(haze_i<200 || date==6 || date==7)
	{
		printf("%d no",end_id)	;		
	}
	else if(haze_i>=200 && haze_i<400)
	{
			switch(date)
			{
				case 1:
						switch(end_id)
						{
							case 1: case 6:
								printf("%d yes",end_id);
								break;
							default:
								printf("%d no",end_id);
								break;
						}break;
				case 2:
						switch(end_id)
						{
							case 2: case 7:
								printf("%d yes",end_id);
								break;
							default:
								printf("%d no",end_id);
								break;
						}break;
				case 3:
						switch(end_id)
						{
							case 3: case 8:
								printf("%d yes",end_id);
								break;
							default:
								printf("%d no",end_id);
								break;
						}break;
				case 4:
						switch(end_id)
						{
							case 4: case 9:
								printf("%d yes",end_id);
								break;
							default:
								printf("%d no",end_id);
								break;
						}break;
				case 5:
						switch(end_id)
						{
							case 5: case 0:
								printf("%d yes",end_id);
								break;
							default:
								printf("%d no",end_id);
								break;
						}break;
			}
	}
	else
	{
		switch(date)
		{
			case 1: case 3: case 5:
				switch(end_id)
				{
					case 1: case 3: case 5:  case 7: case 9:
						printf("%d yes",end_id);
						break;
					default:
						printf("%d no",end_id);
						break;
				}break;
			case 2: case 4:
				switch(end_id)
				{
					case 0: case 2: case 4:  case 6: case 8:
						printf("%d yes",end_id);
						break;
					default:
						printf("%d no",end_id);
						break;
				}break;
		}
	}
	return 0;
}
