#!/bin/bash

touch result.txt

norminette &>> result.txt

cc -Wall -Wextra -Werror *.c -o rush-01 &>> result.txt

echo "=============================================" &>> result.txt
echo "|             test Error                    |" &>> result.txt
echo "=============================================" &>> result.txt

echo "./rush-01" &>> result.txt
./rush-01 &>> result.txt
echo "./rush-01 \"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2\" \"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2\"" &>> result.txt
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" &>> result.txt
echo "./rush-01 \"\"" &>> result.txt
./rush-01 "" &>> result.txt
echo "./rush-01 \"4 3 2 1 1 2 2 2 4 d 2 1 1 2 2 2\"" &>> result.txt
./rush-01 "4 3 2 1 1 2 2 2 4 d 2 1 1 2 2 2" &>> result.txt
echo "./rush-01 \"4 3 2 0 1 2 2 2 4 3 2 1 1 2 2 2\"" &>> result.txt
./rush-01 "4 3 2 0 1 2 2 2 4 3 2 1 1 2 2 2" &>> result.txt
echo "./rush-01 \"-4 -3 -2 -1 -1 -2 -2 -2 -4 -3 -2 -1 -1 -2 -2 -2\"" &>> result.txt
./rush-01 "-4 -3 -2 -1 -1 -2 -2 -2 -4 -3 -2 -1 -1 -2 -2 -2" &>> result.txt
echo "./rush-01 \" 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2\"" &>> result.txt
./rush-01 " 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" &>> result.txt
echo "./rush-01 \"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 \"" &>> result.txt
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 " &>> result.txt
echo "./rush-01 \"3321123333211233               \"" &>> result.txt
./rush-01 "3321123333211233               " &>> result.txt
echo "./rush-01 \"3321123333211233\"" &>> result.txt
./rush-01 "3321123333211233" &>> result.txt
echo "./rush-01 \" 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 \"" &>> result.txt
./rush-01 " 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 " &>> result.txt
echo "./rush-01 \"4 3 2 1  1 2 2 2 4 3 2 1 1 2 2 2\"" &>> result.txt
./rush-01 "4 3 2 1  1 2 2 2 4 3 2 1 1 2 2 2" &>> result.txt
echo "./rush-01 \"2 1 2 4 224 2 1 2 1 3 2 3 3 2 1\"" &>> result.txt
./rush-01 "2 1 2 4 224 2 1 2 1 3 2 3 3 2 1" &>> result.txt
echo "./rush-01 \"                               \"" &>> result.txt
./rush-01 "                               " &>> result.txt
echo "./rush-01 \"1111111111111111111111111111111\"" &>> result.txt
./rush-01 "1111111111111111111111111111111" &>> result.txt
echo "./rush-01 \"4 2 1 1 2 2 24 3 3 2 1 1 2 2 2 2\"" &>> result.txt
./rush-01 "4 2 1 1 2 2 24 3 3 2 1 1 2 2 2 2" &>> result.txt
echo "./rush-01 \"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 2\"" &>> result.txt
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 2" &>> result.txt
echo "./rush-01 \"4 3 2 1 1 2 2 2 4 3 2 2 2 2\"" &>> result.txt
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 2 2 2" &>> result.txt
echo "./rush-01 \"4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4\"" &>> result.txt
./rush-01 "4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4" &>> result.txt
echo "./rush-01 \"2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2\"" &>> result.txt
./rush-01 "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2" &>> result.txt
echo "./rush-01 \"1 4 2 2 3 2 1 2 1 3 2 2 3 1 2 2\"" &>> result.txt
./rush-01 "1 4 2 2 3 2 1 2 1 3 2 2 3 1 2 2" &>> result.txt
echo "./rush-01 \"4 3 2 1 1\t2 2 2 4 3 2 1 1 2 2 2\"" &>> result.txt
./rush-01 "4 3 2 1 1\t2 2 2 4 3 2 1 1 2 2 2" &>> result.txt

echo "=============================================" &>> result.txt
echo "|             test OK                       |" &>> result.txt
echo "=============================================" &>> result.txt

echo "./rush-01 \"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2\"" &>> result.txt
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" &>> result.txt
echo "./rush-01 \"2 1 2 3 2 3 2 1 2 3 1 2 3 2 3 1\"" &>> result.txt
./rush-01 "2 1 2 3 2 3 2 1 2 3 1 2 3 2 3 1" &>> result.txt
echo "./rush-01 \"3 2 1 2 1 2 3 2 3 2 2 1 2 1 3 3\"" &>> result.txt
./rush-01 "3 2 1 2 1 2 3 2 3 2 2 1 2 1 3 3" &>> result.txt
echo "./rush-01 \"3 1 2 3 2 2 3 1 2 2 1 3 3 2 2 1\"" &>> result.txt
./rush-01 "3 1 2 3 2 2 3 1 2 2 1 3 3 2 2 1" &>> result.txt
echo "./rush-01 \"3 2 2 1 2 2 1 3 4 2 1 3 1 2 2 2\"" &>> result.txt
./rush-01 "3 2 2 1 2 2 1 3 4 2 1 3 1 2 2 2" &>> result.txt
echo "./rush-01 \"2 3 1 2 2 1 3 2 3 1 3 2 2 4 1 2\"" &>> result.txt
./rush-01 "2 3 1 2 2 1 3 2 3 1 3 2 2 4 1 2" &>> result.txt
echo "./rush-01 \"1 2 3 2 3 1 2 2 1 4 2 2 4 1 2 2\"" &>> result.txt
./rush-01 "1 2 3 2 3 1 2 2 1 4 2 2 4 1 2 2" &>> result.txt
echo "./rush-01 \"2 1 2 4 2 4 2 1 2 1 3 2 3 3 2 1\"" &>> result.txt
./rush-01 "2 1 2 4 2 4 2 1 2 1 3 2 3 3 2 1" &>> result.txt
echo "./rush-01 \"2 4 1 2 2 1 3 3 2 4 1 2 2 1 3 3\"" &>> result.txt
./rush-01 "2 4 1 2 2 1 3 3 2 4 1 2 2 1 3 3" &>> result.txt
echo "./rush-01 \"2 2 1 3 2 3 2 1 2 2 1 3 2 2 3 1\"" &>> result.txt
./rush-01 "2 2 1 3 2 3 2 1 2 2 1 3 2 2 3 1" &>> result.txt

echo "=============================================" &>> result.txt
echo "|             Partie bonus                  |" &>> result.txt
echo "=============================================" &>> result.txt

echo "=============================================" &>> result.txt
echo "|             test Erreur 1 x 1             |" &>> result.txt
echo "=============================================" &>> result.txt

echo "./rush-01 \"1 1 1 1 1\"" &>> result.txt
./rush-01 "1 1 1 1 1" &>> result.txt
echo "./rush-01 \"1 1 1\"" &>> result.txt
./rush-01 "1 1 1" &>> result.txt
echo "./rush-01 \"1 1 1 1 \"" &>> result.txt
./rush-01 "1 1 1 1 " &>> result.txt
echo "./rush-01 \" 1 1 1 1\"" &>> result.txt
./rush-01 " 1 1 1 1" &>> result.txt
echo "./rush-01 \" 1 1 1 1 \"" &>> result.txt
./rush-01 " 1 1 1 1 " &>> result.txt
echo "./rush-01 \"1111111\"" &>> result.txt
./rush-01 "1111111" &>> result.txt
echo "./rush-01 \"       \"" &>> result.txt
./rush-01 "       " &>> result.txt
echo "./rush-01 \"1 111 1\"" &>> result.txt
./rush-01 "1 111 1" &>> result.txt
echo "./rush-01 \"1 1\t1 1\"" &>> result.txt
./rush-01 "1 1\t1 1" &>> result.txt
echo "./rush-01 \"1 a 1 1\"" &>> result.txt
./rush-01 "1 a 1 1" &>> result.txt
echo "./rush-01 \"1 2 1 1\"" &>> result.txt
./rush-01 "1 2 1 1" &>> result.txt

echo "=============================================" &>> result.txt
echo "|             test OK 1 x 1                 |" &>> result.txt
echo "=============================================" &>> result.txt

echo "./rush-01 \"1 1 1 1\"" &>> result.txt
./rush-01 "1 1 1 1" &>> result.txt

echo "=============================================" &>> result.txt
echo "|             test Erreur 2 x 2             |" &>> result.txt
echo "=============================================" &>> result.txt

echo "./rush-01 \"2 1 1 2 2 1 1 2 1\"" &>> result.txt
./rush-01 "2 1 1 2 2 1 1 2 1" &>> result.txt
echo "./rush-01 \"2 1 1 2 2 1 1\"" &>> result.txt
./rush-01 "2 1 1 2 2 1 1" &>> result.txt
echo "./rush-01 \"2 1 1 2 2 1 1 2 \"" &>> result.txt
./rush-01 "2 1 1 2 2 1 1 2 " &>> result.txt
echo "./rush-01 \" 2 1 1 2 2 1 1 2\"" &>> result.txt
./rush-01 " 2 1 1 2 2 1 1 2" &>> result.txt
echo "./rush-01 \" 2 1 1 2 2 1 1 2 \"" &>> result.txt
./rush-01 " 2 1 1 2 2 1 1 2 " &>> result.txt
echo "./rush-01 \"221111222211112\"" &>> result.txt
./rush-01 "221111222211112" &>> result.txt
echo "./rush-01 \"               \"" &>> result.txt
./rush-01 "               " &>> result.txt
echo "./rush-01 \"2 1 1 212 1 1 2\"" &>> result.txt
./rush-01 "2 1 1 212 1 1 2" &>> result.txt
echo "./rush-01 \"2 1 1 2\t2 1 1 2\"" &>> result.txt
./rush-01 "2 1 1 2\t2 1 1 2" &>> result.txt
echo "./rush-01 \"2 1 a 2 2 1 1 2\"" &>> result.txt
./rush-01 "2 1 a 2 2 1 1 2" &>> result.txt
echo "./rush-01 \"2 1 3 2 2 1 1 2\"" &>> result.txt
./rush-01 "2 1 3 2 2 1 1 2" &>> result.txt
echo "./rush-01 \"2 1 2 1 2 1 1 2\"" &>> result.txt
./rush-01 "2 1 2 1 2 1 1 2" &>> result.txt

echo "=============================================" &>> result.txt
echo "|             test OK 2 x 2                 |" &>> result.txt
echo "=============================================" &>> result.txt

echo "./rush-01 \"2 1 1 2 2 1 1 2\"" &>> result.txt
./rush-01 "2 1 1 2 2 1 1 2" &>> result.txt
echo "./rush-01 \"1 2 2 1 1 2 2 1\"" &>> result.txt
./rush-01 "1 2 2 1 1 2 2 1" &>> result.txt

echo "=============================================" &>> result.txt
echo "|             test Erreur 3 x 3             |" &>> result.txt
echo "=============================================" &>> result.txt

echo "./rush-01 \"2 2 1 2 1 3 3 1 2 1 2 2 1\"" &>> result.txt
./rush-01 "2 2 1 2 1 3 3 1 2 1 2 2 1" &>> result.txt
echo "./rush-01 \"2 2 1 2 1 3 3 1 2 1 2\"" &>> result.txt
./rush-01 "2 2 1 2 1 3 3 1 2 1 2" &>> result.txt
echo "./rush-01 \"2 2 1 2 1 3 3 1 2 1 2 2 \"" &>> result.txt
./rush-01 "2 2 1 2 1 3 3 1 2 1 2 2 " &>> result.txt
echo "./rush-01 \" 2 2 1 2 1 3 3 1 2 1 2 2\"" &>> result.txt
./rush-01 " 2 2 1 2 1 3 3 1 2 1 2 2" &>> result.txt
echo "./rush-01 \" 2 2 1 2 1 3 3 1 2 1 2 2 \"" &>> result.txt
./rush-01 " 2 2 1 2 1 3 3 1 2 1 2 2 " &>> result.txt
echo "./rush-01 \"22221122113333112211222\"" &>> result.txt
./rush-01 "22221122113333112211222" &>> result.txt
echo "./rush-01 \"                       \"" &>> result.txt
./rush-01 "                       " &>> result.txt
echo "./rush-01 \"2 2 1 211 3 3 1 2 1 2 2\"" &>> result.txt
./rush-01 "2 2 1 211 3 3 1 2 1 2 2" &>> result.txt
echo "./rush-01 \"2 2 1 2 1 3 3\t1 2 1 2 2\"" &>> result.txt
./rush-01 "2 2 1 2 1 3 3\t1 2 1 2 2" &>> result.txt
echo "./rush-01 \"2 2 1 2 a 3 3 1 2 1 2 2\"" &>> result.txt
./rush-01 "2 2 1 2 a 3 3 1 2 1 2 2" &>> result.txt
echo "./rush-01 \"2 2 1 2 1 3 3 1 4 1 2 2\"" &>> result.txt
./rush-01 "2 2 1 2 1 3 3 1 4 1 2 2" &>> result.txt
echo "./rush-01 \"2 2 1 2 1 2 3 1 2 1 2 2\"" &>> result.txt
./rush-01 "2 2 1 2 1 2 3 1 2 1 2 2" &>> result.txt


echo "=============================================" &>> result.txt
echo "|             test OK 3 x 3                 |" &>> result.txt
echo "=============================================" &>> result.txt

echo "./rush-01 \"2 2 1 2 1 3 3 1 2 1 2 2\"" &>> result.txt
./rush-01 "2 2 1 2 1 3 3 1 2 1 2 2" &>> result.txt
echo "./rush-01 \"1 2 2 3 1 2 1 2 2 3 1 2\"" &>> result.txt
./rush-01 "1 2 2 3 1 2 1 2 2 3 1 2" &>> result.txt
















