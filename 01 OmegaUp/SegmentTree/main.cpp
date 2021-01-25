#include <iostream>
#define MAX 1000000
int segmentIndex[MAX*4+2];
using namespace std;

void constructTree(int low, int high, int pos)
{
    if (low==high)
    {
        segmentIndex[pos] = 0;
        return;
    }
    int mid = (low + high) / 2;
    constructTree(low,mid,2*pos+1);
    constructTree(mid+1,high,2*pos+2);
    segmentIndex[pos] = segmentIndex[2*pos+1] + segmentIndex[2*pos+2];
}

int search(int qlow, int qhigh, int low, int high, int pos)
{
    if (qlow > high || qhigh < low) return 0; // No overlap
    if (qlow <= low && qhigh >= high) return segmentIndex[pos];
    int mid = (low + high)/2;
    return search(qlow,qhigh,low,mid,2*pos+1) + search(qlow,qhigh,mid+1,high,2*pos+2);
}

void update(int low, int high, int pos, int index)
{
        if (low == high)segmentIndex[pos]++;
        else
        {
            int mid = (low+high)/2;
            if (low <= index && index<=mid)
                update(low,mid,2*pos+1, index);
            else
                update(mid+1, high, 2*pos+2,index);
            segmentIndex[pos] = segmentIndex[2*pos+1] + segmentIndex[2*pos+2];
            return;
        }
}


int main()
{
    int n;
    cin>>n;
    constructTree(0,MAX,0);

    int j,x;
    for (int i=0;i<n;i++)
    {
        cin>>j;
        if (j == 1)
        {
            cin>>x;
            update(0,MAX,0,x);
        }
        else if (j == 2)
        {
            cin>>x;
            cout<<search(0,x,0,MAX,0)<<endl;
        }
    }

    return 0;
}
