//#include <iostream>
//#include <vector>
//#include <map>
//#include <string>
//using namespace std;
//vector<string> solution(vector<string>& players, vector<string>& callings)
//{
//	map<string, int> mp;
//	for (int i = 0; i < players.size(); ++i)
//	{
//		mp[players[i]] = i;
//	}
//
//	int s1, s2;
//	string temp;
//	for (int i = 0; i < callings.size(); ++i)
//	{
//		s2 = mp[callings[i]];
//		s1 = s2 - 1;
//		mp[players[s2]]--; mp[players[s1]]++;
//
//		temp = players[s2];
//		players[s2] = players[s1];
//		players[s1] = temp;
//	}
//
//	return players;
//}
//
//int main()
//{
//	vector<string> players {"현진", "경재"};
//	vector<string> callings {"경재"};
//	vector<string> answer = solution(players, callings);
//
//	for (int i = 0; i < answer.size(); ++i)
//	{
//		cout << answer[i] << " ";
//	}
//}