filename(n) = sprintf("TimeMeasurements_%s.dat", title_label(n))
#title_label(n) = (n==1) ? "nthFibonacciNumber1" : (n==2) ? "nthFibonacciNumber2" : (n==3) ? "nthFibonaccinumber3" : (n==4) ? "nthFibonacciNumber4" : (n==5) ? "nthFibonacciNumber5" : (n==6) ? "nthFibonacciNumber6" : (n==7) = "nthFibonacciNumber7" : "NOT_IMPLEMENTED"
title_label(n) = (n==1) ? "nthFibonacciNumber1" : (n==2) ? "nthFibonacciNumber2" : (n==3) ? "nthFibonaccinumber3" : (n==4) ? "nthFibonacciNumber4" : (n==5) ? "nthFibonacciNumber5" : (n==6) ? "nthFibonacciNumber6" : (n==7) ? "nthFibonacciNumber7" : "NOT_IMPLEMENTED"

# number of implementations
n = 7
set title "Computing Fibonacci numbers"
set key outside #Legende auﬂerhalb
set style fill transparent solid 0.3
set xlabel "n"
set ylabel "running time [us]"
set yrange [0:50]
plot for [i = 1:n] filename(i) using 1:($2):($3) title '' with filledcurve lt i, \
						for[i = 1:n] filename(i) using 1:($4) title title_label(i) with lines lt i lw 2
pause -1