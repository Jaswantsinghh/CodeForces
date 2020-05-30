    #include<iostream>
    using namespace std;
    int d,sumTime,i,minsum,maxsum,minTime[1000],maxTime[1000];
    int main(){

    cin>>d>>sumTime;

    for(i=0;i<d;i++)
    {
    cin>>minTime[i]>>maxTime[i];
    minsum+=minTime[i];
    maxsum+=maxTime[i];
    }
    if(sumTime<minsum || sumTime>maxsum)
    {
    cout<<"NO";
    }
    else
    {
    cout<<"YES"<<endl;
    for(i=0;i<d;i++){
    cout<<min(maxTime[i],sumTime-minsum+minTime[i])<<" ";
    sumTime-=min(maxTime[i],sumTime-minsum+minTime[i]);
    minsum-=minTime[i];
    }
    }
    return 0;
    }
