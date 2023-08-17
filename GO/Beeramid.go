func Beeramid(bonus int, price float64) int {
	if bonus <= 0 {
		return 0
	}
	BeerCount := 0.0
	i := 0.0
	for ; BeerCount*price <= float64(bonus); i++ {
		BeerCount += i * i
	}
	return int(i - 2)
}
