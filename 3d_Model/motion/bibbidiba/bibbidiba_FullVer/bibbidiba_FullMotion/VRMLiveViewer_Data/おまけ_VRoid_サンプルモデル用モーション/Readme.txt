Vroidサンプルモデル「AvatarSample_B」用に最適化したモーションです。
※このモーションは「vmdretarget」と「VmdTms」で最適化させています。

ちなみに以下は「VRMLiveViewer」でうまい事ダンスさせる方法ですが
現在これらを自動に行ってくれるGUIツールがリリースされていますので
それで調整した方が良いと思いますが、取り合えずクイックガイド的な感じで
以下に記載しておきます。

①　vmdretargetで学習させ、「srcpose.ini」と「trgpose.ini」を生成
②　bibbidibaFull_DanceMotion.vmdを「VmdRetarget.exe」へD&D
③　vmdretargetで調整された「bibbidibaFull_DanceMotion-ret.vmd」を「VmdTms.exe」へD&D
④　③で再調整されたVMDを「VRMLiveViewer」へ投入すればうまい事ダンスしてくれます



★VMD調整変換に関しては、申し訳ないですが質問は受け付けられません
　お手数ですが「VRMLiveViewer」開発元へお問い合わせください。

