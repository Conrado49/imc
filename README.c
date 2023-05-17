teste
	<title>Botões Sim e Não</title>
	<style>
		.container {
			display: flex;
			justify-content: center;
			align-items: center;
			height: 100vh;
		}
		
		.button {
			font-size: 24px;
			padding: 10px 20px;
			background-color: #00d9ff;
			color: #ffffff;
			border: none;
			border-radius: 5px;
			cursor: pointer;
			position: absolute;
		}
		
		.yes {
			left: 50%;
			transform: translate(-50%, 0);
        }   
		
		.no {
			left: calc(50% + 100px);
			transform: translate(-50%, 0);
		}
		
		    .no.mouseover {
			top: calc(100% * var(--y));
			left: calc(100% * var(--x));
		}
	</style>
</head>
<body>
	<div class="container">
        <h1 style="padding-bottom: 100px; text-align: center;">AAAAAAAAAAAAAAAAAAAAA</h1>
		<button class="button yes"><a href="https://ava.sesisenai.org.br" target="_blank" style="color: #ffffff;">Sim</a></button>
		<button class="button no"><a href="https://ava.sesisenai.org.br" target="_blank" style="color: #ffffff;">Não</a></button>
	</div>
	
	<script>
		document.querySelectorAll('.button').forEach(button => {
			button.addEventListener('mouseover', function(e) {
				this.classList.toggle('mouseover');
				if (this.classList.contains('mouseover')) {
					this.style.setProperty('--x', Math.random());
					this.style.setProperty('--y', Math.random());
				}
			});
		});
	</script>
</body>
</html>
