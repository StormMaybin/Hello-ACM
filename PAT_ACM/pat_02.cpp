/**
*author StormMaybin
*date 2016-06-10
*ˮ�⣬���Ǹ�ʽҪע�⣬�е�ӵ����Ǻ�����Ǹ���ֵ���˴�ӡ�ˣ����Ե����ύ������ 
*/
# include <stdio.h>

int main(void)
{
  	int n;
  	char c;
  	scanf("%d %c",&n,&c);
  	//��2n^2-1�Ƚ�
  	int count = 0;
  	int cha;
 	for(int i = 1; i < 100; i++)
        {
          		if(n <= (2*i*i - 1))
                {
                  	if(n == 2*i*i-1)
                  	{
                  		cha = 0; 
                  		count = i;
					} 
                  	else
                  	{
                  		cha = n - 2*(i-1)*(i-1) + 1;
                  		count = i-1;
                  	}
                  	break;
                }
        }
  	//���˵��Ҫ��ӡcount��
  	int s = 1; 
  	for(int i = count; i > 0; i--)
	{
          	for(int j = 1; j <= 2*i-1; j++)
            {
                printf("%c",c);
            } 
          	printf("\n");
          	if((i-1)>0)
          	{
          		for(int j = 1; j <= s; j++)
            	{
                	printf(" ");
            	}
            	s++;
          	}
    }
  	
 	for(int i = 2; i <= count; i++)
    {
    	s--;
    	for(int i = 1; i < s; i++)
    	{
    		printf(" ");
    	}
        for(int j = 1; j <= 2*i-1; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d\n",cha);
	return 0;
}
