/*
��ǻ�Ϳ� ����, ����, �� ������ �ϴ� ���α׷� �ۼ�. ��ǻ�ʹ� ����ڿ��� �˸��� �ʰ� ����, ����, ���߿� �ϳ��� �����ϰ�
����ڴ� ���α׷��� �Է� �ȳ� �޽����� ���� 3���� �ϳ� ����, ������ ��ǻ�Ͱ� �����ѰͰ� ���и� �˷���.
*/

#include <iostream>
#include <cstdlib>                                                                     // ������ �߻���Ű�� ���� cstdlib ��ó���� ���.                                    
#include <ctime>                                                                       // �ð��� ������� ctime ��ó���� ���
using namespace std;

int main() {

	int user_enter, com_enter;

	do {                                                                               // do while���� ����Ͽ� �����ϰ� 4�� �ԷµǸ� �ݺ����� ����.
        cout << "����, ����, ���� �ϳ��� �����Ͻÿ�. (����:1, ����:2, ��:3, ����:4) ";
        cin >> user_enter;                                                             // ����ڿ��� ����� ������ �Է¹���.
        cout << endl;

        srand((unsigned)time(NULL));                                                   // �ð��� �������� �Ͽ� �����߻��� ����ø��� �ٸ� ���� �߻�.
        com_enter = 1 + rand() % 3;                                                    // ��ǻ�Ͱ� ���� �ִ� �������� 1,2,3 3���� �ε� rand()%3��
                                                                                       //  0,1,2 �̹Ƿ� 1�� ����.
        if (user_enter == 1) {                                                         // ����ڰ� 1(����)�� �Է½� ��ȣ�� ����
             if (com_enter == 1)                                                        
                cout << "�����ϴ�. ��ǻ�ʹ� ������ �½��ϴ�.\n\n\n\n";               // if else���� ����Ͽ� �� ��츦 ����.
            else if (com_enter == 2)
                cout << "��ǻ�Ͱ� �̰���ϴ�. ��ǻ�ʹ� ������ �½��ϴ�.\n\n\n\n";
            else
                cout << "����� �̰���ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.\n\n\n\n";
        }
        if (user_enter == 2) {                                                         // ����ڰ� 2(����)�� �Է½� ��ȣ�� ����.
            if (com_enter == 1)
                cout << "����� �̰���ϴ�. ��ǻ�ʹ� ������ �½��ϴ�.\n\n\n\n";
            else if (com_enter == 2)
                cout << "�����ϴ�. ��ǻ�ʹ� ������ �½��ϴ�.\n\n\n\n";
            else
                cout << "��ǻ�Ͱ� �̰���ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.\n\n\n\n";
        }
        if (user_enter == 3) {                                                         // ����ڰ� 3(��) �Է½� ��ȣ�� ����.
            if (com_enter == 1)
                cout << "��ǻ�Ͱ� �̰���ϴ�. ��ǻ�ʹ� ������ �½��ϴ�.\n\n\n\n";
            else if (com_enter == 2)
                cout << "����� �̰���ϴ�. ��ǻ�ʹ� ������ �½��ϴ�.\n\n\n\n";
            else
                cout << "�����ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.\n\n\n\n";
        }
	} while (user_enter != 4);                                                         // do while���� ����Ͽ� �����ϰ� 4�� �ԷµǸ� �ݺ����� ����.

	system("pause");
	return 0;
}