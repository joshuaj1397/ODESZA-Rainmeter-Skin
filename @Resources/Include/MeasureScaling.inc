[MeasureResolution]
Measure=Calc
Formula=(#SCREENAREAHEIGHT#*#SCREENAREAWIDTH#)
IfEqualValue=786432
IfEqualAction=[!SetWallpaper "#@#Images/A Moment Apart 1024x768.jpg" Center][!WriteKeyValue "Variables" "MeterBandStart" "(#SCREENAREAWIDTH# / 3.7)"][!WriteKeyValue "Variables" "BarWidth" "7"][!WriteKeyValue "Variables" "BarGap" "2R"][!WriteKeyValue "Variables" "MeterBandY" "260"][!WriteKeyValue "Variables" "BarCount" "55"][!WriteKeyValue "Variables" "BarHeight" "130"][!WriteKeyValue "Variables" "FontSize1" "14"][!WriteKeyValue "Variables" "FontSize2" "12"]
IfAboveValue=786432
IfAboveAction=[!SetWallpaper "#@#Images/A Moment Apart 1080x1920.jpg" Center][!WriteKeyValue "Variables" "MeterBandStart" "510"][!WriteKeyValue "Variables" "BarWidth" "10"][!WriteKeyValue "Variables" "BarGap" "6R"][!WriteKeyValue "Variables" "MeterBandY" "350"][!WriteKeyValue "Variables" "BarCount" "57"][!WriteKeyValue "Variables" "BarHeight" "200"][!WriteKeyValue "Variables" "FontSize1" "20"][!WriteKeyValue "Variables" "FontSize2" "18"]
