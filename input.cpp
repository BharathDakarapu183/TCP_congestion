
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
bool nextBool(double probability)
{
    return (rand() / (double)RAND_MAX) < probability;
}
int main(int argc, char **argv) {
 double cw,ts,ct,ki,km,kn,kf,ps;
 char *name;
 ct = 10000000;
 int i=0;
 ki = atof(argv[1]);
 km = atof(argv[2]);
 kn = atof(argv[3]);
 kf = atof(argv[4]);
 ps = atof(argv[5]);
 ts = atof(argv[6]);
 name = argv[7];
 cw = ceil(ki);
 ofstream outdata;
 //cout<< ki<< km<< kn<< kf<< ps << ts<< "\n";
 //cout<<cw<<"\n";
 //strcat(name,".txt");
 outdata.open(name);
 outdata << ceil(cw) << "\n";
 //cout<< ts << "\n";
 while(i<ts) 
     {
      // cout<< "in1" << "\n";
     if(cw <= ct) 
           {
            if(nextBool(ps))
                 {
                  //cout<< "inif1" << "\n";
                  ct = cw/2;
                  cw = max(1.0,cw*kf);
                  //cout<< ceil(cw) << "\n";
                  outdata << ceil(cw) << "\n";
                  cw = ceil(cw);
                 }
            else
                 {
                  //cout<< "inelse1" << "\n";
                  cw = min(cw+km,1000.0);
                 // cout<< ceil(cw) << "\n";
                  outdata << ceil(cw) << "\n";
                  cw = ceil(cw);
                 }
           }
      else 
           {
            if(nextBool(ps))
                 {
                  //cout<< "inif2" << "\n";
                  ct = cw/2;
                  cw = max(1.0,cw*kf);
                  //cout<< ceil(cw) << "\n";
                  outdata << ceil(cw) << "\n";
                  cw = ceil(cw);
                 }
            else
                 {
                  cw = min(cw+(kn/cw),1000.0);
                 // cout<< ceil(cw) << "\n";
                  outdata << ceil(cw) << "\n";
                  cw = ceil(cw);
                 }
           }
       i++;
     }
    outdata.close();
    return 0;
}

