#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	stack<int> st;
	int boardSize = board.size();
	int moveIndex = 0;
	for (int i = 0; i < moves.size(); i++)
	{
		moveIndex = moves[i] - 1;
		for (int j = 0; j < boardSize; j++)
		{
			if (board[j][moveIndex] == 0) continue;

			if (st.empty())
			{
				st.push(board[j][moveIndex]);
				board[j][moveIndex] = 0;
				break;
			}
			else
			{
				if (st.top() == board[j][moveIndex])
				{
					st.pop();
					answer += 2;
				}
				else
					st.push(board[j][moveIndex]);

				board[j][moveIndex] = 0;
				break;
			}
		}
	}
	return answer;
}

int main()
{
	cout << solution({ {0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1} }, { 1,5,3,5,1,2,1,4 });
	return 0;
}