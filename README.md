# CheckSwitchCase
switch - case文の考察のためのリポジトリ．

## Check_default.c
結論から言えば，defaultの位置は末尾でなくても大丈夫．
しかし，gccのバージョンが11.3.0であるため，C言語の規格はC17([リリースノート](https://gcc.gnu.org/gcc-11/changes.html)より)
であるから，C17では可能であっても過去の規格では不可能な可能性がある．

## check_order.c
目に見えた実行速度の差はほぼない．初めてswitch-case文を実行するときはメモリの領域を確保するためか実行速度が遅いが，
それ以外のときはほぼ有意差は見られなかった．

## check_words.c
例外処理の場合は必ずdefaultと書かねばならない．`hoge`では実行されない．
