 int countSegments(string s) {
      stringstream ss(s);
      int cnt = 0;
   
      while (ss >> s) cnt++;
      return cnt;
    }
};
