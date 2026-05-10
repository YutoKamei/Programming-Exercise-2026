/* 平均点の計算 */
double calc_average(int s1, int s2);
/* 合格・不合格の判定:合格:1,不合格:0 */
int judge_pass(double ave);
/* 評点の計算 */
char get_grade(double ave);
/* 成績を出力 */
/* const char name[]で,関数内で配列nameの内容を書き換えできないようにする */
void print_report(const char name [], int s1, int s2);
