use warnings;
use strict;
use 5.040.1;
use Readonly;

use constant {
    PI => 3,
    version => '1'
};

use constant NUMBERS1 => {1, 2, 3, 4};
#NUMBERS1->[0] = 99;
use constant NUMBERS2 => [1, 2, 3, 4];
NUMBERS2->[1] = 13;
use constant NUMBERS3 => (1, 2, 3, 4);
#NUMBERS3->[1] = 12;

Readonly my @rray1_hash => {1, '1', "11", my $a};
Readonly my @rray2 => (1, '1', "11");
Readonly my @rray3 => [1, '1', "11"];
#@rray2[0] = 0;

my $calar_array2 = \@rray2;

#foreach $item (@array)
foreach my $calar_array2_item (@rray2) {say $calar_array2_item;}
foreach my $calar_array3_item (@rray3) {say $calar_array3_item;}

my $calar_first_number  = 30;
my $calar_second_number = 15;

say (('aaa', 123)[0]);
print $calar_first_number * $calar_second_number, "\n";
say PI, version;
say @rray1_hash;
say @rray2;
say @rray3;
