#include <bits/stdc++.h>

using namespace std;

int countUniqueEmails(vector<string>& emails) {
  set<string> unique_emails;
  for (const string& email : emails) {
    string local_name, domain_name;
    size_t at_pos = email.find('@');
    if (at_pos != string::npos) {
      local_name = email.substr(0, at_pos);
      domain_name = email.substr(at_pos + 1);

     // Process local name
      size_t plus_pos = local_name.find('+');
      if (plus_pos != string::npos) {
        local_name = local_name.substr(0, plus_pos);
      }
      local_name.erase(remove(local_name.begin(), local_name.end(), '.'), local_name.end());

      unique_emails.insert(local_name + "@" + domain_name);
    }
  }
  return unique_emails.size();
}

int main() {
    vector<string> riz;
    string f;
    getline(cin,f);
    string g="";
    for(int i=0;i<f.length();i++)
    {
        if(isspace(f[i]))
        {
            riz.push_back(g);
            g="";
        }
        else
        g+=f[i];
    }
    riz.push_back(g);


  cout << countUniqueEmails(riz) << endl;
 

  return 0;
}
