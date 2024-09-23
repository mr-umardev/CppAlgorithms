#include <iostream> 
#include <unordered_map> 
using namespace std; 
  
// Driver code 
int main() 
{ 
 
  unordered_map<string, int> umap; 

  umap["First"] = 10; 
  umap["Second"] = 20; 
  umap["Third"] = 30; 
  
  for (auto x : umap) 
    cout << x.first<< " " <<  
            x.second << endl; 
} 