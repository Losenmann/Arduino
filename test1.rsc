:global funcWifi do={/interface wireless{:foreach i in=[find (band~"5ghz")] do={set number=$i band=5ghz-onlyac channel-width=20/40/80mhz-XXXX frequency=5190}}}
