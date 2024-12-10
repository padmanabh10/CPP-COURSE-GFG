#include <stdio.h>
class Solution{
public:
    void longDistance(int P,int X,int R1,int Q, int Y,int R2)
    {
        int Pdist;
        int Qdist;
        Pdist=(P/X)+(R1);
        Qdist=(Q/Y)+(R2);
        if(Pdist>Qdist)
            printf("NINA\n%d",Qdist);
        else if(Pdist==Qdist)
            printf("BOTH\n%d",Qdist);
        else
            printf("PAUL\n%d",Pdist);
    }

};
int main() {
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int P,Q,X,Y,R1,R2;
        scanf("%d%d%d",&P,&X,&R1);
        scanf("%d%d%d",&Q,&Y,&R2);
        Solution ob;
        ob.longDistance(P,X,R1,Q,Y,R2);
        printf("\n");
    }
    return 0;
}