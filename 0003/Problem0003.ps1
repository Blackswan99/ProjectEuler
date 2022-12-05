#The prime factors of 13195 are 5, 7, 13 and 29.
#
#What is the largest prime factor of the number 600851475143 ?


function Check-Prime {
    param(
        [int64] $Number
    )

    for ($i = 1; $i -lt $Number+1; $i++) {
        if ($Number % $i -eq 0 -and $i -ne 1 -and $i -ne $Number) {
            return $false
        }
    }
    return $true
}

[int64]$NumberToCheck = 600851475143

for ($i = 1; $i -lt $NumberToCheck + 1; $i++) {
    if ($NumberToCheck % $i -eq 0) {
        if (Check-Prime -Number $i) {
            Write-Host "Prime factor of $NumberToCheck`: $i"
        }
    }
}
