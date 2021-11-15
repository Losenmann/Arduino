:global funcWifi do={
	/interface wireless{
		:foreach i in=[find (band~"5ghz")] do={set number=$i band=5ghz-onlyac channel-width=20/40/80mhz-XXXX frequency=5190};
		:foreach i in=[find (band~"2ghz")] do={set number=$i band=2ghz-b/g/n channel-width=20/40mhz-XX frequency=auto};
	}
}
