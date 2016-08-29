<div id="gutter">
<%  
  var gutter = "0,Site Logs,/traffic/;"

  
  gutter += "1,Web Site Traffic,/log/en/traffic/default.asp?url="+wurl+";";  
//  gutter += "2,Weblog Schema,/log/en/traffic/schema.asp?url="+wurl+";";
  gutter += "3,SQL Search,/log/en/traffic/sql.asp?url="+wurl+";";
  gutter += "4,JHU Casjobs,http://skyservice.pha.jhu.edu/casjobs/;";
  gutter += "5,Privacy Policy,/log/en/traffic/privacy.asp?url="+wurl+";";

  makeGutter(gselect,gutter);
%>
</div>

