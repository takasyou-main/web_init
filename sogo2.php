<?php
   $str=$_POST['haija'];
   if($str!=NULL){
   $result="{$str}じゃないが";
   }else{
   $result="はい";
   }
?>
<html>
  <head>
    <meta content="text/html "charset="UTF-8"/>
<title>s1411385履修/総合科目Ⅱ</title>
<LINK rel="stylesheet" type="text/css" href="style.css">
  </head>
  <body>
   <h1 id="toph1"><div id="top">私の履修計画まとめ</div></h1>
	<p id="sub">新入生は単位取得の夢を見るのか</p>


	<table class="link">
	  <tr>
	    <th class="link">必修科目</th>
	    <th class="link">体育</th>
	    <th class="link">自由単位</th>
	  </tr>
	  <tr>
   	    <td class="link">総合科目Ⅰ</td>
    	    <td class="link">夏</td>
    	    <td class="link">フランス語</td>
    	  </tr>
	  <tr>
	    	    <td class="link"><a href="sogo2.php">総合科目Ⅱ</td>
	    	    <td class="link">冬</td>
	    	    <td class="link">相対性理論</td>
	  </tr>
	  </table>
<hr id="bar">
<h1><div id="title">総合科目 Ⅱ<div>
<a id="return" href ="index.html">ホームに戻る</a></h1>

<h2>一年生最大の悩みどころ</h2>
<p>総合科目Ⅱは、１、２時の基礎必修科目である。総合単位は6。3つの科目群に分かれている。</p>




<ul>
<li>物質、数理、生命、環境に関わる科目
<li>精神、文化、社会、歴史に関わる科目
<li>上記二つの科目群にまたがる科目
</ul>
<p><a href="https://www.tsukuba.ac.jp/education/ug-courses/directory.html">履修要覧参考</a></p>
<p>そして、それぞれの科目群につき講義を２つ取らなければならない、という大変重量のある科目である。</p>

<h2>私の履修状況</h2>
<p>次のように履修申請を出した。</p>
	<table>
	  <tr>
	    <th>科目群A</th>
	    <th>科目群B</th>
	    <th>科目群C</th>
	  </tr>
	  <tr>
   	    <td>現代物理学への招待Ⅰ(春AB)</td>
    	    <td>こころの構造と病理(春AB)</td>
    	    <td>こころの実験室2(春C)</td>
    	  </tr>
	  <tr>
	    	    <td>現代物理学への招待Ⅲ(秋AB)</td>
	    	    <td>思想で学ぼうⅡ(秋AB)</td>
	    	    <td>NULL</td>
	  </tr>
	  </table>
<p><em>お分かり頂けただろうか</em>言い訳をしていこう</p>
<h2>どうせだから好きな科目を…。</h2>
<p>総合科目は、専門科目でないためモチベーションの維持が難しいとされている。多くが1限に組まれている→起きるのがつらいという現実もある。”総合大学”の特性を生かすためにも、是非後輩の皆さんには興味のある科目をとってほしい。</p>
<p>だから私は、C群の月２にB群をぶっ込んだ。<em>・・・後悔は２年でする</em></p>

<p><a href ="#toph1">ページトップに戻る</a></p>
<p><a href ="index.html">ホームに戻る</a></p>
<form method="post" action="./sogo2.php">
<input type="text" id="input" name="haija">
<input type="submit" value="LHE">
<div><?php echo htmlspecialchars($result,ENT_QUOTES); ?></div>
</form>




