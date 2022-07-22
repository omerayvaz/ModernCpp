wc -l < ./data.dat
cat ./data.dat | grep d[o,a]lor | wc -l
wc -w < ./data.dat
grep -o 'mol' data.dat | wc -l
