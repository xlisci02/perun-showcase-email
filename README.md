# perun-showcase-email

```
# clone
git clone https://github.com/xlisci02/perun-showcase-email
cd perun-showcase-email

# build and run
make
time ./regex seed.txt
time ./regex worst-case-muts/worst_case2.txt

# to fuzz, first initialize as perun repo
perun init --vsc-type=git --configure

# create output directory for fuzzing
mkdir output

# fuzz example
perun fuzz -b ./regex -w seed2.txt -o output -t 900 -mp 2 -h 30 -mcs probabilistic
```
