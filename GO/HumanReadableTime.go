package kata

import "fmt"

func HumanReadableTime(seconds int) string {
  var hours int 
  var min int
  
  hours = seconds / 3600
  min = (seconds - 3600*hours) / 60
  seconds -= (seconds / 60) * 60
  
  return fmt.Sprintf("%02d:%02d:%02d", hours, min, seconds)
}
