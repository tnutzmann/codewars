package kata

import (
	"regexp"
)

func alphanumeric(str string) bool {
  match, _ := regexp.MatchString("^[[:alnum:]]+[[:alnum:]]*$", str)
  return match
}
