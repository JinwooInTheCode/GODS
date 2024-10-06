#include <string>
#include <vector>

using namespace std;

// [1��] ������� 

// 10���� -> 2���� (���ڿ�)
string toBinary(int n) {
    string binary = "";
    if (n == 0) {
        return "0";
    } while (n > 0) {
        binary = to_string(n % 2) + binary; // �������� �տ� ���̱�
        n = n / 2;
    }
    return binary;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    // arr1�� arr2�� �������� ������ �迭 A, B
    vector<string> A(n);
    vector<string> B(n);
    vector<string> answer(n);

    // �������� ��ȯ
    for (int i = 0; i < n; i++) {
        A[i] = toBinary(arr1[i]);
        B[i] = toBinary(arr2[i]);

        // ���ڿ� ���� n���� �����ֱ�
        while (A[i].size() < n) {
            A[i] = '0' + A[i];
        }
        while (B[i].size() < n) {
            B[i] = '0' + B[i];
        }
    }

    for (int i = 0; i < n; i++) {
        string line = ""; // ���پ�
        for (int j = 0; j < n; j++) {
            if (A[i][j] == '1' || B[i][j] == '1') { // �� �� �ϳ��� '1'�̸� "#"
                line += '#';
            }
            else if (A[i][j] == '0' && B[i][j] == '0') { // �� �� '0'�̸� " "
                line += " ";
            }
        }
        answer[i] = line;
    }


    return answer;
}