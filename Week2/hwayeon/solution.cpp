#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// ���� ������ ���� ū ���� ���� �� �ֵ��� ��
bool compare(string a, string b) {
    return a + b > b + a;
}
string solution(vector<int> numbers) {
    int n = numbers.size();
    vector<string> strArr(n);

    for (int i = 0; i < n; i++) {
        strArr[i] = to_string(numbers[i]);
    } // ���� Ÿ�� ���Ҹ� ���ڿ��� �ٲپ� �迭�� ���
    
    sort(strArr.begin(), strArr.end(), compare); // ����

    string answer;
    for (int i = 0; i < n; i++) {
        answer += strArr[i];
    } // �̾� ���̱�

    if (answer[0] == '0') {
        answer = '0';
    } // numbers�� ���Ұ� ��� 0�� ���
    return answer;
}