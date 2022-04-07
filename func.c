#include <stdio.h>
#include <string.h>

char* number_into_text(int num){

	
	int i = 0;
	int j = 0;
	int arr[6];
	for(i;i<6;i++){
		arr[i]=-1;
	}
	i = 0;
	int t = num;
	while(t>0){
		arr[i] = t%10;
		t = t/10;
		i++;
	}
	char* string = "\0";
	char* res = "\0";
	
	if(arr[5]>0){																// 6 digit
		int q = arr[5];
		res = (char*) malloc(7+ strlen(string));
		strcpy(res,string);
		switch(q)	{
			case 1: 	strcat(res,"(OneHun\0"); break;
			case 2:		strcat(res,"(TwoHun\0"); break;
			case 3:		strcat(res,"(ThrHun\0"); break;
			case 4:		strcat(res,"(FouHun\0"); break;
			case 5:		strcat(res,"(FivHun\0"); break;
			case 6:		strcat(res,"(SixHun\0"); break;
			case 7:		strcat(res,"(SevHun\0"); break;
			case 8:		strcat(res,"(EigHun\0"); break;
			case 9:		strcat(res,"(NinHun\0"); break;
			default: break;
		}
		if(arr[4]>=0){
			q = arr[4];
			string =(char*) malloc(7+ strlen(res));
			strcpy(string,res);
			switch(q)	{
			case 0:     strcat(string,"_ZerTen)\0"); break;
			case 1: 	strcat(string,"_OneTen\0"); break;
			case 2:		strcat(string,"_TwoTen\0"); break;
			case 3:		strcat(string,"_ThrTen\0"); break;
			case 4:		strcat(string,"_FouTen\0"); break;
			case 5:		strcat(string,"_FivTen\0"); break;
			case 6:		strcat(string,"_SixTen\0"); break;
			case 7:		strcat(string,"_SevTen\0"); break;
			case 8:		strcat(string,"_EigTen\0"); break;
			case 9:		strcat(string,"_NinTen\0"); break;
			default: break;
			}
			
			if(arr[3]>=0){
				q = arr[3];
				
				res = (char*) malloc(8+ strlen(string));
				strcpy(res,string);
				switch(q)	{
					case 0:     strcat(res,"_Zer)Tou\0"); break;
					case 1: 	strcat(res,"_One)Tou\0"); break;
					case 2:		strcat(res,"_Two)Tou\0"); break;
					case 3:		strcat(res,"_Thr)Tou\0"); break;
					case 4:		strcat(res,"_Fou)Tou\0"); break;
					case 5:		strcat(res,"_Fiv)Tou\0"); break;
					case 6:		strcat(res,"_Six)Tou\0"); break;
					case 7:		strcat(res,"_Sev)Tou\0"); break;
					case 8:		strcat(res,"_Eig)Tou\0"); break;
					case 9:		strcat(res,"_Nin)Tou\0"); break;
					default: break;
				}
				
				if(arr[2]>=0){
					q = arr[2];
					string =(char*) malloc(7+ strlen(res));
					strcpy(string,res);
					switch(q)	{
						case 0:		strcat(string,"_ZerHun\0"); break;
						case 1: 	strcat(string,"_OneHun\0"); break;
						case 2:		strcat(string,"_TwoHun\0"); break;
						case 3:		strcat(string,"_ThrHun\0"); break;
						case 4:		strcat(string,"_FouHun\0"); break;
						case 5:		strcat(string,"_FivHun\0"); break;
						case 6:		strcat(string,"_SixHun\0"); break;
						case 7:		strcat(string,"_SevHun\0"); break;
						case 8:		strcat(string,"_EigHun\0"); break;
						case 9:		strcat(string,"_NinHun\0"); break;
					default: break;
					}
					
					if(arr[1]>=0){
						q = arr[1];
						res = (char*) malloc(8+ strlen(string));
						strcpy(res,string);
						switch(q)	{
							case 0: 	strcat(res,"_ZerTen\0"); break;
							case 1: 	strcat(res,"_OneTen\0"); break;
							case 2:		strcat(res,"_TwoTen\0"); break;
							case 3:		strcat(res,"_ThrTen\0"); break;
							case 4:		strcat(res,"_FouTen\0"); break;
							case 5:		strcat(res,"_FivTen\0"); break;
							case 6:		strcat(res,"_SixTen\0"); break;
							case 7:		strcat(res,"_SevTen\0"); break;
							case 8:		strcat(res,"_EigTen\0"); break;
							case 9:		strcat(res,"_NinTen\0"); break;
							default: break;
						}
						
						if(arr[0]>=0){
							q = arr[0];
							string =(char*) malloc(4+ strlen(res));
							strcpy(string,res);
							switch(q)	{
							case 0: 	strcat(string,"_Zer\0"); break;
							case 1: 	strcat(string,"_One\0"); break;
							case 2:		strcat(string,"_Two\0"); break;
							case 3:		strcat(string,"_Thr\0"); break;
							case 4:		strcat(string,"_Fou\0"); break;
							case 5:		strcat(string,"_Fiv\0"); break;
							case 6:		strcat(string,"_Six\0"); break;
							case 7:		strcat(string,"_Sev\0"); break;
							case 8:		strcat(string,"_Eig\0"); break;
							case 9:		strcat(string,"_Nin\0"); break;
							default: break;
							}
						}
						
					}
				}
			}
			
		}
	}else if(arr[4]>0){															//5 digit
				int q = arr[4];
			string =(char*) malloc(7+ strlen(res));
			strcpy(string,res);
			switch(q)	{
				case 1: 	strcat(string,"(OneTen\0"); break;
				case 2:		strcat(string,"(TwoTen\0"); break;
				case 3:		strcat(string,"(ThrTen\0"); break;
				case 4:		strcat(string,"(FouTen\0"); break;
				case 5:		strcat(string,"(FivTen\0"); break;
				case 6:		strcat(string,"(SixTen\0"); break;
				case 7:		strcat(string,"(SevTen\0"); break;
				case 8:		strcat(string,"(EigTen\0"); break;
				case 9:		strcat(string,"(NinTen\0"); break;
				default: break;
			}
			
			if(arr[3]>=0){
				q = arr[3];
				res = (char*) malloc(8+ strlen(string));
				strcpy(res,string);
				switch(q)	{
					case 0:		strcat(res,"_Zer)Tou\0"); break;
					case 1: 	strcat(res,"_One)Tou\0"); break;
					case 2:		strcat(res,"_Two)Tou\0"); break;
					case 3:		strcat(res,"_Thr)Tou\0"); break;
					case 4:		strcat(res,"_Fou)Tou\0"); break;
					case 5:		strcat(res,"_Fiv)Tou\0"); break;
					case 6:		strcat(res,"_Six)Tou\0"); break;
					case 7:		strcat(res,"_Sev)Tou\0"); break;
					case 8:		strcat(res,"_Eig)Tou\0"); break;
					case 9:		strcat(res,"_Nin)Tou\0"); break;
					default: break;
				}
				
				if(arr[2]>=0){
					q = arr[2];
					string =(char*) malloc(7+ strlen(res));
					strcpy(string,res);
					switch(q)	{
						case 0:		strcat(string,"_ZerHun\0"); break;
						case 1: 	strcat(string,"_OneHun\0"); break;
						case 2:		strcat(string,"_TwoHun\0"); break;
						case 3:		strcat(string,"_ThrHun\0"); break;
						case 4:		strcat(string,"_FouHun\0"); break;
						case 5:		strcat(string,"_FivHun\0"); break;
						case 6:		strcat(string,"_SixHun\0"); break;
						case 7:		strcat(string,"_SevHun\0"); break;
						case 8:		strcat(string,"_EigHun\0"); break;
						case 9:		strcat(string,"_NinHun\0"); break;
						default: break;
					}
					
					if(arr[1]>=0){
						q = arr[1];
						res = (char*) malloc(8+ strlen(string));
						strcpy(res,string);
						switch(q)	{
							case 0:		strcat(res,"_ZerTen\0"); break;
							case 1: 	strcat(res,"_OneTen\0"); break;
							case 2:		strcat(res,"_TwoTen\0"); break;
							case 3:		strcat(res,"_ThrTen\0"); break;
							case 4:		strcat(res,"_FouTen\0"); break;
							case 5:		strcat(res,"_FivTen\0"); break;
							case 6:		strcat(res,"_SixTen\0"); break;
							case 7:		strcat(res,"_SevTen\0"); break;
							case 8:		strcat(res,"_EigTen\0"); break;
							case 9:		strcat(res,"_NinTen\0"); break;
							default: break;
						}
						
						if(arr[0]>=0){
							q = arr[0];
							string =(char*) malloc(4+ strlen(res));
							strcpy(string,res);
							switch(q)	{
								case 0:		strcat(string,"_Zer\0"); break;
								case 1: 	strcat(string,"_One\0"); break;
								case 2:		strcat(string,"_Two\0"); break;
								case 3:		strcat(string,"_Thr\0"); break;
								case 4:		strcat(string,"_Fou\0"); break;
								case 5:		strcat(string,"_Fiv\0"); break;
								case 6:		strcat(string,"_Six\0"); break;
								case 7:		strcat(string,"_Sev\0"); break;
								case 8:		strcat(string,"_Eig\0"); break;
								case 9:		strcat(string,"_Nin\0"); break;
								default: break;
							}
						}
						
					}
				}
			}
			
		}else if(arr[3]>0){															//4 digit
				int q = arr[3];
				res = (char*) malloc(8+ strlen(string));
				strcpy(res,string);
				switch(q)	{
					case 1: 	strcat(res,"OneTou\0"); break;
					case 2:		strcat(res,"TwoTou\0"); break;
					case 3:		strcat(res,"ThrTou\0"); break;
					case 4:		strcat(res,"FouTou\0"); break;
					case 5:		strcat(res,"FivTou\0"); break;
					case 6:		strcat(res,"SixTou\0"); break;
					case 7:		strcat(res,"SevTou\0"); break;
					case 8:		strcat(res,"EigTou\0"); break;
					case 9:		strcat(res,"NinTou\0"); break;
					default: break;
				}
				
				if(arr[2]>=0){
					q = arr[2];
					string =(char*) malloc(7+ strlen(res));
					strcpy(string,res);
					switch(q)	{
						case 0:		strcat(string,"_ZerHun\0"); break;
						case 1: 	strcat(string,"_OneHun\0"); break;
						case 2:		strcat(string,"_TwoHun\0"); break;
						case 3:		strcat(string,"_ThrHun\0"); break;
						case 4:		strcat(string,"_FouHun\0"); break;
						case 5:		strcat(string,"_FivHun\0"); break;
						case 6:		strcat(string,"_SixHun\0"); break;
						case 7:		strcat(string,"_SevHun\0"); break;
						case 8:		strcat(string,"_EigHun\0"); break;
						case 9:		strcat(string,"_NinHun\0"); break;
						default: break;
					}
					
					if(arr[1]>=0){
						q = arr[1];
						res = (char*) malloc(8+ strlen(string));
						strcpy(res,string);
						switch(q)	{
							case 0:		strcat(res,"_ZerTen\0"); break;
							case 1: 	strcat(res,"_OneTen\0"); break;
							case 2:		strcat(res,"_TwoTen\0"); break;
							case 3:		strcat(res,"_ThrTen\0"); break;
							case 4:		strcat(res,"_FouTen\0"); break;
							case 5:		strcat(res,"_FivTen\0"); break;
							case 6:		strcat(res,"_SixTen\0"); break;
							case 7:		strcat(res,"_SevTen\0"); break;
							case 8:		strcat(res,"_EigTen\0"); break;
							case 9:		strcat(res,"_NinTen\0"); break;
							default: break;
						}
						
						if(arr[0]>=0){
							q = arr[0];
							string =(char*) malloc(4+ strlen(res));
							strcpy(string,res);
							switch(q)	{
								case 0:		strcat(string,"_Zer\0"); break;
								case 1: 	strcat(string,"_One\0"); break;
								case 2:		strcat(string,"_Two\0"); break;
								case 3:		strcat(string,"_Thr\0"); break;
								case 4:		strcat(string,"_Fou\0"); break;
								case 5:		strcat(string,"_Fiv\0"); break;
								case 6:		strcat(string,"_Six\0"); break;
								case 7:		strcat(string,"_Sev\0"); break;
								case 8:		strcat(string,"_Eig\0"); break;
								case 9:		strcat(string,"_Nin\0"); break;
								default: break;
							}
						}
						
					}
				}
				
			}else if(arr[2]>0){														//3 digit
				int q = arr[2];
				string =(char*) malloc(7+ strlen(res));
				strcpy(string,res);
				switch(q)	{
					case 1: 	strcat(string,"OneHun\0"); break;
					case 2:		strcat(string,"TwoHun\0"); break;
					case 3:		strcat(string,"ThrHun\0"); break;
					case 4:		strcat(string,"FouHun\0"); break;
					case 5:		strcat(string,"FivHun\0"); break;
					case 6:		strcat(string,"SixHun\0"); break;
					case 7:		strcat(string,"SevHun\0"); break;
					case 8:		strcat(string,"EigHun\0"); break;
					case 9:		strcat(string,"NinHun\0"); break;
					default: break;
				}
				if(arr[1]>=0){
					q = arr[1];
					res = (char*) malloc(8+ strlen(string));
					strcpy(res,string);
					switch(q)	{
						case 0:		strcat(res,"_ZerTen\0"); break;
						case 1: 	strcat(res,"_OneTen\0"); break;
						case 2:		strcat(res,"_TwoTen\0"); break;
						case 3:		strcat(res,"_ThrTen\0"); break;
						case 4:		strcat(res,"_FouTen\0"); break;
						case 5:		strcat(res,"_FivTen\0"); break;
						case 6:		strcat(res,"_SixTen\0"); break;
						case 7:		strcat(res,"_SevTen\0"); break;
						case 8:		strcat(res,"_EigTen\0"); break;
						case 9:		strcat(res,"_NinTen\0"); break;
						default: break;
					}				
					if(arr[0]>=0){
						q = arr[0];
						string =(char*) malloc(4+ strlen(res));
						strcpy(string,res);
						switch(q)	{
							case 0:		strcat(string,"_Zer\0"); break;
							case 1: 	strcat(string,"_One\0"); break;
							case 2:		strcat(string,"_Two\0"); break;
							case 3:		strcat(string,"_Thr\0"); break;
							case 4:		strcat(string,"_Fou\0"); break;
							case 5:		strcat(string,"_Fiv\0"); break;
							case 6:		strcat(string,"_Six\0"); break;
							case 7:		strcat(string,"_Sev\0"); break;
							case 8:		strcat(string,"_Eig\0"); break;
							case 9:		strcat(string,"_Nin\0"); break;
							default: break;
						}
					}
				}
					
			}else if(arr[1]>0){													//2 digit
				int q = arr[1];
				res = (char*) malloc(8+ strlen(string));
				strcpy(res,string);
				switch(q)	{
					case 1: 	strcat(res,"OneTen\0"); break;
					case 2:		strcat(res,"TwoTen\0"); break;
					case 3:		strcat(res,"ThrTen\0"); break;
					case 4:		strcat(res,"FouTen\0"); break;
					case 5:		strcat(res,"FivTen\0"); break;
					case 6:		strcat(res,"SixTen\0"); break;
					case 7:		strcat(res,"SevTen\0"); break;
					case 8:		strcat(res,"EigTen\0"); break;
					case 9:		strcat(res,"NinTen\0"); break;
					default: break;
				}
						
				if(arr[0]>=0){
					q = arr[0];
					string =(char*) malloc(4+ strlen(res));
					strcpy(string,res);
					switch(q)	{
						case 0:		strcat(string,"_Zer\0"); break;
						case 1: 	strcat(string,"_One\0"); break;
						case 2:		strcat(string,"_Two\0"); break;
						case 3:		strcat(string,"_Thr\0"); break;
						case 4:		strcat(string,"_Fou\0"); break;
						case 5:		strcat(string,"_Fiv\0"); break;
						case 6:		strcat(string,"_Six\0"); break;
						case 7:		strcat(string,"_Sev\0"); break;
						case 8:		strcat(string,"_Eig\0"); break;
						case 9:		strcat(string,"_Nin\0"); break;
						default: break;
					}
				}
			}else if(arr[0]>0){												//1digit
				int q = arr[0];
				string =(char*) malloc(4+ strlen(res));
				strcpy(string,res);
				switch(q)	{
					case 0:		strcat(string,"Zer\0"); break;
					case 1: 	strcat(string,"One\0"); break;
					case 2:		strcat(string,"Two\0"); break;
					case 3:		strcat(string,"Thr\0"); break;
					case 4:		strcat(string,"Fou\0"); break;
					case 5:		strcat(string,"Fiv\0"); break;
					case 6:		strcat(string,"Six\0"); break;
					case 7:		strcat(string,"Sev\0"); break;
					case 8:		strcat(string,"Eig\0"); break;
						case 9:		strcat(string,"Nin\0"); break;
					default: break;
				}
				
			}
		return string;
	}
 
 
 
 int main(){
	 char * s = number_into_text(80);
	 printf("%s",s);
	 return 0;
 }