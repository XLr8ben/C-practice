//pass fail finder
#include <stdio.h>

int main()
{
    int phy, chem, maths;
    float total;
    printf("no. in physics\n");
    scanf("%d", &phy);

    printf("no. in chem\n");
    scanf("%d", &chem);

    printf("no. in maths\n");
    scanf("%d", &maths);
 
    total = (phy + chem + maths)/3;
    if((total<40) || phy<33 || chem<33 ||maths<33)
    {printf("your total percentage is %f, you r fail\n", total);
        
    }
    else{
        printf("your total percentage is %f, you r pass\n", total);
    }
    
    return 0;
}
