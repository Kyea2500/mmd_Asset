■説明
Deino氏制作のシーエをMMDモデル化しました。

Metasequoia形式

Ca_nurse_pmx.mqo
pmx出力するためのデータです。
Keynote経由でExportPMDを使用して出力するだけです。
出力時の設定はPMX_ca_nurse.txtを使用してください。
Deino氏のmqoデータから大きさを8倍にリサイズしています。

sorce_Ca_nurse_pmx.mqo
全てのオブジェクトとマテリアルの名称に"CAN_"の文字列が付加されています。PMX出力する前にテキストエディタでmqoとmqxを開いて置き換えで取り除いてください。
これは諸々のチェック用にMetasequoiaで複数同一のデータを読込む必要から、オブジェクトとマテリアルの名称をユニークにするための措置です。


MikuMikuDance(MMD)形式

Ca_nurse.pmx
MMD標準モデルと同じ姿勢のモデルです。


CSV
PmxEditorで使用するデータです。"CSVから追加/更新"で読込むことで設定をロードできます。

bone.csv        ボーンの設定です。
material.csv	材質の設定です。
rigidbody.csv	剛体の設定です。
joint.csv	Jointの設定です。


■注意事項
mqoデータは一部にKeynoteでウェイトペイントに該当する機能である"頂点ウェイト補正"機能を使用しています。
Keynoteで動かすときは"Option"の設定で"頂点ウェイト補正"を有効にしてください。

mqoからpmx出力したデータは首に胴体と頭の繋ぎ目があるので、PmxEditorでこの部分の頂点を選択して
"編集"メニューの"法線関連"から"近傍頂点の法線平均化"で見えなくしてください。


■動作環境
Metasequoiaデータ
Metasequoia_Ver3.1.6
Metasequoia_Ver4.3.4 32bit
必須Plagin
Keynote_Ver0.0.4.5
ExportPMD_ver 0.0.1.7

MMDデータ
MikuMikuDance.exe　Ver.9.24
PmxEditor0.2.2.2


Metasequoia配布サイト
metaseq.net
http://www.metaseq.net/

Keynote,ExportPMD配布サイト
mqdl
http://mqdl.jpn.org/

MikuMikuDance配布サイト
VPVP
http://www.geocities.jp/higuchuu4/index.htm

PmxEditor配布サイト
とある工房
http://kkhk22.seesaa.net/

■データの利用範囲
Deino氏の利用規約に従います。

■製作者
デザイン:Deino
モデリング:Deino
リギング:Kuroyu

Deino
http://www.deino.sakura.ne.jp/self_portrait.htm

黒ゆ(Kuroyu)
棲息地:http://b.dlsite.net/RG12372/

■更新履歴
Ver1.0.0(20141224)
公開