# Script to compare a single sorting algorithm for different types of input
filename(n) = sprintf("TimeMeasurements_Mergesort%s.dat", title_label(n))
title_label(n) = (n==1) ? "Ordered" : (n==2) ? "Reversed" : (n==3) ? "Permuted" : (n==4) ? "Randomized" : (n==5) ? "Repeated" : "NOT_IMPLEMENTED"

# number of implementations
n = 5
set title "Mergesort with differend input types"
set key outside #Legende auﬂerhalb
set style fill transparent solid 0.3
set xlabel "n"
set ylabel "running time [us]"
#set yrange [0:20000000]
plot for [i = 1:n] filename(i) using 1:($2):($3) title '' with filledcurve lt i, \
						for[i = 1:n] filename(i) using 1:($4) title title_label(i) with lines lt i lw 2
pause -1
