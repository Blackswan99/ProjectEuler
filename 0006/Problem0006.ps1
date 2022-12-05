#The sum of the squares of the first ten natural numbers is 385,
#The square of the sum of the first ten natural numbers is 3025,
#Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025-385=2640
#Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

function SumOfSqares {
    param(
        [int64] $UpTo
    )
    $sum = 0
    for ($i = 1; $i -lt $UpTo + 1; $i++){
        $sum += $i*$i
    }
    return $sum
}

function SqareOfSum {
    param(
        [int64] $UpTo
    )
    $sum = 0
    for ($i = 1; $i -lt $UpTo + 1; $i++){
        $sum += $i
    }
    return $sum*$sum
}

Write-Host "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: " -NoNewline
Write-Host $((SqareOfSum -UpTo 100)-(SumOfSqares -UpTo 100))
