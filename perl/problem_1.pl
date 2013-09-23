#!/usr/bin/perl
use strict;
use warnings;

my $sum = 0;
for my $i (0..999) {
    if(($i % 3 == 0) || ($i % 5 == 0)) {
        $sum += $i;
    }
}
print "The sum is: $sum\n";

